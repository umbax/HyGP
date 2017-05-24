// Copyright 2016 Dr Umberto Armani
//  
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//  
//      http://www.apache.org/licenses/LICENSE-2.0
//  
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef READ_FILE_NEW_H_
#define READ_FILE_NEW_H_

#include <sstream>    // for stringstream
#include <string>    //  string class (C++)
#include <vector>
#include <fstream>

#include "../modules/primitives.h"
#include "../classes/run_parameters.h"
#include "../classes/problem_definition.h"


void read_input_file(string, RunParameters*, ProblemDefinition*);
void read_test_data(string, RunParameters*, ProblemDefinition*);

#endif /* READ_FILE_NEW_H_ */
