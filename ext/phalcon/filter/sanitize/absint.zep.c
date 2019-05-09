
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"


/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */
/**
 * Phalcon\Filter\Sanitize\AbsInt
 *
 * Sanitizes a value to absolute integer
 */
ZEPHIR_INIT_CLASS(Phalcon_Filter_Sanitize_AbsInt) {

	ZEPHIR_REGISTER_CLASS(Phalcon\\Filter\\Sanitize, AbsInt, phalcon, filter_sanitize_absint, phalcon_filter_sanitize_absint_method_entry, 0);

	return SUCCESS;

}

/**
 * @var mixed input The text to sanitize
 */
PHP_METHOD(Phalcon_Filter_Sanitize_AbsInt, __invoke) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *input, input_sub, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&input_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &input);



	ZVAL_LONG(&_0, 519);
	ZEPHIR_CALL_FUNCTION(&_1, "filter_var", NULL, 207, input, &_0);
	zephir_check_call_status();
	ZVAL_LONG(&_0, zephir_get_intval(&_1));
	ZEPHIR_RETURN_CALL_FUNCTION("abs", NULL, 208, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

