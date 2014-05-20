#ifndef __SudokuSolver_H_
#define __SudokuSolver_H_


#include <iostream>
#include <vector>
#import <stack>

struct Move {
    int i;
    int j;
};


// Note about bitsets

// For easier debugging, bitsets are indexed with the value
// they represent: values from 1 to 9 are stored at indexes
// 1 to 9
// Index 0 is just ignored



class SudokuSolver {
private:
    int grid[9][9];
    std::stack<Move> moves;

    int eligible(int i, int j, std::bitset<10> & nums) const;
    void pushMove(int i, int j, int val);
    void popMove();
    void backtrack(int moves);

public:
    SudokuSolver(const std::string & input);
    bool solve();
    void print() const;

    // or just use this helper
    static void solve(const std::string & input);
};


#endif //__SudokuSolver_H_
