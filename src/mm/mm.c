/*
 * =====================================================================================
 *
 *       Filename:  mm.c
 *
 *    Description:  内存管理子系统
 *
 *        Version:  1.0
 *        Created:  2014年11月05日 09时54分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Qianyi.lh (liuhuan), qianyi.lh@alibaba-inc.com
 *        Company:  Alibaba-Inc Aliyun
 *
 * =====================================================================================
 */

#include <mm/mm.h>

void init_mm(void)
{
        init_pmm();
        init_vmm();
        init_slob();
}

