#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <iostream>
#include <vector>
#include "./block.h"

class Blockchain
{
public:
  Blockchain();
  void AddBlock(Block bNew);

private:
  uint32_t _nDifficulty;
  std::vector<Block> _vChain;

  Block _GetLastBlock() const;
};

#endif