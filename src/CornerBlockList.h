//
// Created by ZhuangTianYi on 15/6/21.
//

#ifndef CORNERBLOCKLIST_CORDERBLOCKLIST_H
#define CORNERBLOCKLIST_CORDERBLOCKLIST_H

#include "common.h"
#include "Rectangle.h"
#include <vector>
#include <string>
#include <utility>

class CornerBlockList {
    std::vector<Rectangle> rectangles;

    // Mr. Yao uses letter to present every block and
    // I think block id will be better.
    std::vector<int> block_ids;

    // 0 for horizontal and 1 for vertical
    std::vector<bool> orientations;

    // 0 presents 1 and 10 presents 2, details in PPT
    std::vector<bool> uncover_rec_num;

    // Two stacks used in show()
    std::vector<int> HStack;
    std::vector<int> VStack;

    // pairs
    std::vector< std::pair<int, int> > pairs;
public:
    CornerBlockList();
    CornerBlockList(const std::string& file_name);

    // show the CBL in GUI
    void show();

    // TODO: using Simulated Annealing Algorithm to optimize the CBL
    void optimize();

    // TODO: A function used in optimize().
    // Considering both the weighted sum of the area
    // and the total Manhattan wirelength with a
    // parameter between 0 and 1.
    void assess();

};


#endif //CORNERBLOCKLIST_CORDERBLOCKLIST_H
