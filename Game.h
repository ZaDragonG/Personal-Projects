#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game{
    public:
        Game();
        ~Game();
        void Draw();
        void HandleInput();
        void MoveBlockDown();
        void MoveBlockUp();
        bool gameOver;
        int score;
        Music music;

      private:
        Grid grid;
        void MoveBlockLeft();
        void MoveBlockRight();
        Block GetRandomBlock();
        std::vector<Block> GetAllBlocks();
        std::vector<Block> blocks;
        Block currentBlock;
        Block nextBlock;
        bool IsBlockOutside();
        void RotateBlock();
        void LockBlock();
        bool BlockFits();
        void Reset();
        void UpdateScore(int LinesCleared, int moveDownPoints);
        Sound rotateSound;
        Sound clearSound;
};