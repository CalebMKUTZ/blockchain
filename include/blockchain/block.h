#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <cstdint>
#include <sstream>

class Block
{
public:
  std::string sPrevHash;
  Block(uint32_t nIndex, const std::string bData);
  std::string GetHash();
  void MineBlock(uint32_t nDifficulty);

private:
  uint32_t _nIndex;
  int64_t _nNonce;
  std::string _sData;
  std::string _sHash;
  time_t _tTime;

  std::string _CalcHash() const;
};

#endif