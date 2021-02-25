#ifndef __BALFUNCPARAM__H__
#define __BALFUNCPARAM__H__

#include "BalVarDecl.h"
#include <string>

namespace nballerina {

class FuncParam : public VarDecl {
private:
  bool hasDefaultExpr;

public:
  FuncParam() = default;
  FuncParam(TypeDecl *ty, std::string name, std::string metaName, VarKind k,
            VarScope sc, int off, bool hasDefExp);
  ~FuncParam() = default;

  bool hasDefaultValue();
};

} // namespace nballerina

#endif //!__BALFUNCPARAM__H__