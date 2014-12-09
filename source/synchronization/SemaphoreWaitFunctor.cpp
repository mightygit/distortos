/**
 * \file
 * \brief SemaphoreWaitFunctor class implementation
 *
 * \author Copyright (C) 2014 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2014-12-10
 */

#include "distortos/scheduler/SemaphoreWaitFunctor.hpp"

#include "distortos/Semaphore.hpp"

namespace distortos
{

namespace scheduler
{

/*---------------------------------------------------------------------------------------------------------------------+
| public functions
+---------------------------------------------------------------------------------------------------------------------*/

int SemaphoreWaitFunctor::operator()(Semaphore& semaphore) const
{
	return semaphore.wait();
}

}	// namespace scheduler

}	// namespace distortos