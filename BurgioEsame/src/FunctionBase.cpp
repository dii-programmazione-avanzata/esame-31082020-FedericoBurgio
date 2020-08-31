//
// Created by Federico on 31/08/2020.
//

#include "../include/FunctionBase.h"

int *FunctionBase::getInputs() const {
    return inputs;
}

void FunctionBase::setInputs(int *inputs) {
    FunctionBase::inputs = inputs;
}
