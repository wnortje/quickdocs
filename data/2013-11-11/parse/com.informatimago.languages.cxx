
(:TYPE :SYSTEM :NAME "com.informatimago.languages.cxx" :AUTHOR
 "Pascal J. Bourguignon <pjb@informatimago.com>" :MAINTAINER
 "Pascal J. Bourguignon <pjb@informatimago.com>" :VERSION "1.2.1" :LICENCE
 "AGPL3" :DESCRIPTION
 "Restricted C++ parser, used just to analyze the call graph of C++ functions and methods."
 :LONG-DESCRIPTION NIL :DEPENDS-ON ("com.informatimago.common-lisp.cesarum")
 :PACKAGE-LIST
 ((:TYPE :PACKAGE :NAME ".CXX" :FULL-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
   :DOCUMENTATION "
Parsing C++ sources.
This is a restricted parser, used just to analyze
the call graph of C++ functions and methods.


License:

    AGPL3
    
    Copyright Pascal J. Bourguignon 1996 - 2012
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.
    
    You should have received a copy of the GNU Affero General Public License
    along with this program.
    If not, see <http://www.gnu.org/licenses/>

"
   :SYMBOL-LIST
   ((:TYPE :GENERIC :SYMBOL
     (:NAME "SET-FILE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "F" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "READ-A-CHAR" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "DUMP" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "DO-QUOTES" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "FLAG" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "SET-SOURCE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "INPUT" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "PUSH-ON-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "F" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "PARSE-STATEMENT-LIST" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "C++CLASS-NAME" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "NAME" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "RES-TYPE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "ARGUMENTS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "CALLED-METHODS" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "PARSE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP T)
     :LAMBDA-LIST
     ((:NAME "PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "FILE-NAME-LIST" :PACKAGE-NAME
       "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
     :DOCUMENTATION "
DO:                 Parse the files given into the program.
PROGRAM:            An instance of C++PROGRAM.
FILE-NAME-LIST:     A list of file pathnames, C++ sources and headers.")
    (:TYPE :GENERIC :SYMBOL
     (:NAME "ADD-C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "METHOD" :PACKAGE-NAME "COMMON-LISP" :EXTERNALP T))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "UNIFY-METHODS-BY-NAME" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :GENERIC :SYMBOL
     (:NAME "BUILD-METHOD-CALL-GRAF" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP T)
     :LAMBDA-LIST
     ((:NAME "PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION "Builds the method call graph of the program.")
    (:TYPE :GENERIC :SYMBOL
     (:NAME "PRINT-C++METHOD-NAMES" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "CHAR-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :SUPER-CLASS-LIST NIL :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "PREVIOUS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "PREVIOUS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "PUSH-ON-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "CHAR-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      (:NAME "F" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-CHAR" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "CHAR-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "DUMP" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "CHAR-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "FILE-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "CHAR-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "FILE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "FILE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "SET-FILE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "FILE-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      (:NAME "F" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-CHAR" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "FILE-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "LOOK-AHEAD-CHAR-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "CHAR-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "NEXT-CHAR" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "NEXT-CHAR" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "PUSH-ON-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "LOOK-AHEAD-CHAR-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
      (:NAME "F" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-CHAR" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "LOOK-AHEAD-CHAR-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "TOKEN-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :SUPER-CLASS-LIST NIL :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "PREVIOUS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "PREVIOUS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "DO-QUOTES" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
      (:NAME "FLAG" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "PUSH-ON-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
      ((:NAME "F" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "DUMP" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "CHAR-KIND" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "C" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "TOKEN-MEMBER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "TOK" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "LISTE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "TOKEN-KIND" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "TOK" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++TOKEN-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "TOKEN-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "C++SOURCE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "C++SOURCE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "DOQUOTES" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "DOQUOTES" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "DOTRACE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "DOTRACE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "DO-QUOTES" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
      (:NAME "FLAG" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "SET-SOURCE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
      ((:NAME "INPUT" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "LOOK-AHEAD-CHAR-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++NONLTOKEN-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "C++TOKEN-FILTER" :PACKAGE-NAME
       "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++NONLTOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "LOOK-AHEAD-TOKEN-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "TOKEN-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "DOTRACE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "DOTRACE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "NEXT-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "NEXT-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "PUSH-ON-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "LOOK-AHEAD-TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
      ((:NAME "F" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "LOOK-AHEAD-TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "SKIP-COMMENT" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "START-STRING" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "STOP-LAMBDA" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "CPREPROCESSOR-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "TOKEN-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "CPREPROCESSOR-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "CCOMMENT-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "TOKEN-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "CCOMMENT-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++COMMENT-FILTER" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :SUPER-CLASS-LIST
     ((:NAME "TOKEN-FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL :SLOT-LIST NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "READ-A-TOKEN" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++COMMENT-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++HEADER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :SUPER-CLASS-LIST NIL :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "RES-TYPE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "RES-TYPE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "C++CLASS-NAME" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "C++CLASS-NAME" :PACKAGE-NAME
         "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "C++METHOD-NAME" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "C++METHOD-NAME" :PACKAGE-NAME
         "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "ARGUMENTS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "ARGUMENTS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "HEADER-KIND" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "HEADER-KIND" :PACKAGE-NAME
         "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "BAD-TOKEN-LIST" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "BAD-TOKEN-LIST" :PACKAGE-NAME
         "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "RANGE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "S" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL)
      (:NAME "FROM" :PACKAGE-NAME "COM.INFORMATIMAGO.COMMON-LISP.CESARUM.GRAPH"
       :EXTERNALP T)
      (:NAME "END" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "PARSE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP T)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++HEADER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      ((:NAME "FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++BODY" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :SUPER-CLASS-LIST NIL :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "INITIALIZER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "INITIALIZER" :PACKAGE-NAME
         "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "STATEMENTS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "STATEMENTS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "PARSE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP T)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++BODY" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      ((:NAME "FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "PARSE-STATEMENT-LIST" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++BODY" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      ((:NAME "FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "SEARCH-METHOD-CALLS" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "STATEMENTS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "CALLED-METHODS" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++BODY" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :SUPER-CLASS-LIST NIL :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "HEADER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "HEADER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "BODY" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "BODY" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "PARSE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP T)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      ((:NAME "FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "C++CLASS-NAME" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "NAME" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "RES-TYPE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "ARGUMENTS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "CALLED-METHODS" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++CLASS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :SUPER-CLASS-LIST NIL :DOCUMENTATION NIL :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "METHODS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "METHODS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "PARSE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP T)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++CLASS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      ((:NAME "FILTER" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "TOKEN-FILTER" :PACKAGE-NAME
        "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "ADD-C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++CLASS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL))
      (:NAME "METHOD" :PACKAGE-NAME "COMMON-LISP" :EXTERNALP T))
     :DOCUMENTATION NIL)
    (:TYPE :CLASS :SYMBOL
     (:NAME "C++PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP T)
     :SUPER-CLASS-LIST NIL :DOCUMENTATION "Represents the C++ program."
     :SLOT-LIST
     ((:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "METHODS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "METHODS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)
      (:TYPE :CLASS-SLOT :SYMBOL
       (:NAME "DOTRACE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       :ACCESSORS
       ((:NAME "DOTRACE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
         :EXTERNALP NIL))
       :READERS NIL :WRITERS NIL :DOCUMENTATION NIL)))
    (:TYPE :METHOD :SYMBOL
     (:NAME "PARSE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP T)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP T))
      (:NAME "FILE-NAME-LIST" :PACKAGE-NAME
       "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "ADD-C++METHOD" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP T))
      (:NAME "METHOD" :PACKAGE-NAME "COMMON-LISP" :EXTERNALP T))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "SEARCH-UNIF-METH-NAMED" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "NAME" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL)
      (:NAME "UMLIST" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "UNIFY-METHODS-BY-NAME" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP T)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "BUILD-METHOD-CALL-GRAF" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP T)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP T)))
     :DOCUMENTATION NIL)
    (:TYPE :METHOD :SYMBOL
     (:NAME "PRINT-C++METHOD-NAMES" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     (((:NAME "SELF" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP NIL)
       (:NAME "C++PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
        :EXTERNALP T)))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "BUILD-C++METHOD-NAME-LIST" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "MLIST" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "BUILD-UNIF-METH-NAME-LIST" :PACKAGE-NAME
      "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "UMLIST" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
       :EXTERNALP NIL))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "NAME-METHODS" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "L" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL)
    (:TYPE :FUNCTION :SYMBOL
     (:NAME "NODE-NAMED" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
      :EXTERNALP NIL)
     :LAMBDA-LIST
     ((:NAME "G" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL)
      (:NAME "N" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP
       NIL))
     :DOCUMENTATION NIL))
   :EXTERNAL-SYMBOLS
   ((:NAME "BUILD-METHOD-CALL-GRAF" :PACKAGE-NAME
     "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX" :EXTERNALP T)
    (:NAME "C++PROGRAM" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
     :EXTERNALP T)
    (:NAME "PARSE" :PACKAGE-NAME "COM.INFORMATIMAGO.LANGUAGES.CXX.CXX"
     :EXTERNALP T)))))