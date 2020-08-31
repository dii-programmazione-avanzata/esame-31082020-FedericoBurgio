//
// Created by Federico on 31/08/2020.
//

#ifndef BURGIOESAME_FUNCTIONBASE_H
#define BURGIOESAME_FUNCTIONBASE_H

class FunctionBase {
protected:
    int *inputs;
public:
    int *getInputs() const;

    void setInputs(int *inputs);

    virtual int compute() const = 0;
};

#endif //BURGIOESAME_FUNCTIONBASE_H
