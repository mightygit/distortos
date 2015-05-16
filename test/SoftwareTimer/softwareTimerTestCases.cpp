/**
 * \file
 * \brief softwareTimerTestCases object definition
 *
 * \author Copyright (C) 2014-2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2015-05-16
 */

#include "softwareTimerTestCases.hpp"

#include "SoftwareTimerOrderingTestCase.hpp"
#include "SoftwareTimerOperationsTestCase.hpp"
#include "SoftwareTimerFunctionTypesTestCase.hpp"

#include "TestCaseGroup.hpp"

namespace distortos
{

namespace test
{

namespace
{

/*---------------------------------------------------------------------------------------------------------------------+
| local objects
+---------------------------------------------------------------------------------------------------------------------*/

/// SoftwareTimerOrderingTestCase instance
const SoftwareTimerOrderingTestCase orderingTestCase;

/// SoftwareTimerOperationsTestCase instance
const SoftwareTimerOperationsTestCase operationsTestCase;

/// SoftwareTimerFunctionTypesTestCase instance
const SoftwareTimerFunctionTypesTestCase functionTypesTestCase;

/// array with references to TestCase objects related to software timers
const TestCaseGroup::Range::value_type softwareTimerTestCases_[]
{
		TestCaseGroup::Range::value_type{orderingTestCase},
		TestCaseGroup::Range::value_type{operationsTestCase},
		TestCaseGroup::Range::value_type{functionTypesTestCase},
};

}	// namespace

/*---------------------------------------------------------------------------------------------------------------------+
| global objects
+---------------------------------------------------------------------------------------------------------------------*/

const TestCaseGroup softwareTimerTestCases {TestCaseGroup::Range{softwareTimerTestCases_}};

}	// namespace test

}	// namespace distortos
