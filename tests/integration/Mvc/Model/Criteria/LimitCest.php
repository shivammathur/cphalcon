<?php

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalcon.io>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace Phalcon\Test\Integration\Mvc\Model\Criteria;

use IntegrationTester;

/**
 * Class LimitCest
 */
class LimitCest
{
    /**
     * Tests Phalcon\Mvc\Model\Criteria :: limit()
     *
     * @author Phalcon Team <team@phalcon.io>
     * @since  2018-11-13
     */
    public function mvcModelCriteriaLimit(IntegrationTester $I)
    {
        $I->wantToTest('Mvc\Model\Criteria - limit()');
        $I->skipTest('Need implementation');
    }
}
