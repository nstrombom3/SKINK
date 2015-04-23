#ifndef SKINKAPP_H
#define SKINKAPP_H

#include "MooseApp.h"

class SkinkApp;

template<>
InputParameters validParams<SkinkApp>();

class SkinkApp : public MooseApp
{
public:
  SkinkApp(const std::string & name, InputParameters parameters);
  virtual ~SkinkApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* SKINKAPP_H */
