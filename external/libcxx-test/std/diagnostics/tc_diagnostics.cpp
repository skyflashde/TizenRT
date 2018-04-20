/****************************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#include "libcxx_tc_common.h"
#include "tc_diagnostics.hpp"

extern "C"
{
	int tc_diagnostics_main(void)
	{
		tc_libcxx_diagnostics_stdexcept_domain_error();
		tc_libcxx_diagnostics_stdexcept_invalid_argument();
		tc_libcxx_diagnostics_stdexcept_length_error();
		tc_libcxx_diagnostics_stdexcept_logic_error();
		tc_libcxx_diagnostics_stdexcept_out_of_range();
		tc_libcxx_diagnostics_stdexcept_overflow_error();
		tc_libcxx_diagnostics_stdexcept_range_error();
		tc_libcxx_diagnostics_stdexcept_runtime_error();
		tc_libcxx_diagnostics_stdexcept_underflow_error();
		return 0;
	}
}
