/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OCEANBASE_CREATE_TENANT_RESOLVER_
#define OCEANBASE_CREATE_TENANT_RESOLVER_ 1

#include "sql/resolver/ddl/ob_create_tenant_stmt.h"
#include "sql/resolver/ddl/ob_ddl_resolver.h"

namespace oceanbase {
namespace sql {
class ObCreateTenantResolver : public ObDDLResolver {
  public:
  explicit ObCreateTenantResolver(ObResolverParams& params);
  virtual ~ObCreateTenantResolver();

  virtual int resolve(const ParseNode& parse_tree);

  private:
  // types and constants
  private:
  // disallow copy
  DISALLOW_COPY_AND_ASSIGN(ObCreateTenantResolver);
  // function members

  private:
  // data members
};

}  // end namespace sql
}  // end namespace oceanbase

#endif /* OCEANBASE_CREATE_TENANT_RESOLVER_ */
