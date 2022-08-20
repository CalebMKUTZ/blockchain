#include <iostream>
#include "./include/blockchain/blockchain.h"
#include "./include/blockchain/blockchain.h"

int main()
{
  Blockchain bChain = Blockchain();

  bChain.AddBlock(Block(1, "Transaction 1"));

  return 0;
}
