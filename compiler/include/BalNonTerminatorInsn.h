/*
* Copyright (c) 2021, WSO2 Inc. (http://www.wso2.org) All Rights Reserved.
*
* WSO2 Inc. licenses this file to you under the Apache License,
* Version 2.0 (the "License"); you may not use this file except
* in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
*/

#ifndef __BALNONTERMINATORINSN__H__
#define __BALNONTERMINATORINSN__H__

#include "interfaces/Instruction.h"
#include "interfaces/Translatable.h"

namespace nballerina {

// Forward Declaration
class Operand;

class NonTerminatorInsn : public Instruction, public Translatable {
  private:
  public:
    NonTerminatorInsn() = delete;
    NonTerminatorInsn(Operand *lOp, BasicBlock *currentBB);
    virtual ~NonTerminatorInsn() = default;

    virtual void translate(LLVMModuleRef &modRef) override;
};

} // namespace nballerina

#endif //!__BALNONTERMINATORINSN__H__
