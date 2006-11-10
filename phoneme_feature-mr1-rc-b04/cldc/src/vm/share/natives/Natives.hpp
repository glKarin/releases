/*
 *
 * Copyright  1990-2006 Sun Microsystems, Inc. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation. 
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt). 
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA 
 * 
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 or visit www.sun.com if you need additional
 * information or have any questions. 
 */

class Natives: public AllStatic {
private:
  static void register_function(InstanceClass* c,
                                const JvmNativeFunction* functions,
                                bool is_native JVM_TRAPS);
public:
#if (!ROMIZING) || (!defined(PRODUCT))
  // We allow linking of native methods only in non-product or non-romizing
  // modes, and also for dynamical update case
  static void register_natives_for(InstanceClass* c JVM_TRAPS);
#else
  static void register_natives_for(InstanceClass* /*c*/ JVM_TRAPS) {
    // Do nothing. 
  }
#endif

#if ENABLE_DYNAMIC_NATIVE_METHODS || ENABLE_ROM_GENERATOR 

  static ReturnOop get_native_function_name(Method *method
                                            JVM_TRAPS);  
  static ReturnOop convert_to_jni_name(Symbol *class_name,
                                       Symbol *method_name,
                                       Symbol *signature
                                       JVM_TRAPS);
  static void append_jni(TypeArray *byte_array, const char *str, int *index);
  static void append_jni(TypeArray *byte_array, Symbol *symbol,
                                int skip, char end_char, int *index JVM_TRAPS);
  static void append_jni(TypeArray *byte_array, CharacterStream *stream,
                                int skip, char end_char, int *index JVM_TRAPS);
  static char hex_digit(int i);
  static ReturnOop get_jni_class_name(InstanceClass *klass JVM_TRAPS);

#endif
};