#include "../include/blockchain/block.h"
#include "../include/blockchain/sha256.h"

Block::Block(uint32_t nIndex, std::string bData)
{
  _nNonce = -1;
  _tTime = time(nullptr);
}

std::string Block::GetHash()
{
  return _sHash;
}

void Block::MineBlock(uint32_t nDifficulty)
{
  char cstr[nDifficulty + 1];
  for (uint32_t i = 0; i < nDifficulty; ++i)
  {
    cstr[i] = '0';
  }
  cstr[nDifficulty] = '\0';

  std::string str(cstr);

  do
  {
    _nNonce++;
    _sHash = _CalcHash();
  } while (_sHash.substr(0, nDifficulty) != str);

  std::cout << "Block nonce: " << _nNonce << "\n";
  std::cout << "Block hash: " << _sHash << "\n";
}

inline std::string Block::_CalcHash() const
{
  std::stringstream ss;
  ss << _nIndex << _tTime << _sData << _nNonce << sPrevHash;
  return sha256(ss.str());
}
