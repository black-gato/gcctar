
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_PersistenceDelegate__
#define __java_beans_PersistenceDelegate__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class Encoder;
        class Expression;
        class PersistenceDelegate;
    }
  }
}

class java::beans::PersistenceDelegate : public ::java::lang::Object
{

public:
  PersistenceDelegate();
public: // actually protected
  virtual void initialize(::java::lang::Class *, ::java::lang::Object *, ::java::lang::Object *, ::java::beans::Encoder *);
public:
  virtual void writeObject(::java::lang::Object *, ::java::beans::Encoder *);
public: // actually protected
  virtual jboolean mutatesTo(::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::beans::Expression * instantiate(::java::lang::Object *, ::java::beans::Encoder *) = 0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_beans_PersistenceDelegate__