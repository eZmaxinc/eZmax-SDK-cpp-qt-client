/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Scim_ServiceProviderConfig.h
 *
 * 
 */

#ifndef Scim_ServiceProviderConfig_H
#define Scim_ServiceProviderConfig_H

#include <QJsonObject>

#include "Scim_AuthenticationScheme.h"
#include "Scim_ServiceProviderConfig_bulk.h"
#include "Scim_ServiceProviderConfig_changePassword.h"
#include "Scim_ServiceProviderConfig_etag.h"
#include "Scim_ServiceProviderConfig_filter.h"
#include "Scim_ServiceProviderConfig_patch.h"
#include "Scim_ServiceProviderConfig_sort.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Scim_AuthenticationScheme;
class Scim_ServiceProviderConfig_bulk;
class Scim_ServiceProviderConfig_changePassword;
class Scim_ServiceProviderConfig_etag;
class Scim_ServiceProviderConfig_filter;
class Scim_ServiceProviderConfig_patch;
class Scim_ServiceProviderConfig_sort;

class Scim_ServiceProviderConfig : public Object {
public:
    Scim_ServiceProviderConfig();
    Scim_ServiceProviderConfig(QString json);
    ~Scim_ServiceProviderConfig() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Scim_AuthenticationScheme> getAuthenticationSchemes() const;
    void setAuthenticationSchemes(const QList<Scim_AuthenticationScheme> &authentication_schemes);
    bool is_authentication_schemes_Set() const;
    bool is_authentication_schemes_Valid() const;

    Scim_ServiceProviderConfig_bulk getBulk() const;
    void setBulk(const Scim_ServiceProviderConfig_bulk &bulk);
    bool is_bulk_Set() const;
    bool is_bulk_Valid() const;

    Scim_ServiceProviderConfig_changePassword getChangePassword() const;
    void setChangePassword(const Scim_ServiceProviderConfig_changePassword &change_password);
    bool is_change_password_Set() const;
    bool is_change_password_Valid() const;

    QString getDocumentationUri() const;
    void setDocumentationUri(const QString &documentation_uri);
    bool is_documentation_uri_Set() const;
    bool is_documentation_uri_Valid() const;

    Scim_ServiceProviderConfig_etag getEtag() const;
    void setEtag(const Scim_ServiceProviderConfig_etag &etag);
    bool is_etag_Set() const;
    bool is_etag_Valid() const;

    Scim_ServiceProviderConfig_filter getFilter() const;
    void setFilter(const Scim_ServiceProviderConfig_filter &filter);
    bool is_filter_Set() const;
    bool is_filter_Valid() const;

    Scim_ServiceProviderConfig_patch getPatch() const;
    void setPatch(const Scim_ServiceProviderConfig_patch &patch);
    bool is_patch_Set() const;
    bool is_patch_Valid() const;

    Scim_ServiceProviderConfig_sort getSort() const;
    void setSort(const Scim_ServiceProviderConfig_sort &sort);
    bool is_sort_Set() const;
    bool is_sort_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Scim_AuthenticationScheme> m_authentication_schemes;
    bool m_authentication_schemes_isSet;
    bool m_authentication_schemes_isValid;

    Scim_ServiceProviderConfig_bulk m_bulk;
    bool m_bulk_isSet;
    bool m_bulk_isValid;

    Scim_ServiceProviderConfig_changePassword m_change_password;
    bool m_change_password_isSet;
    bool m_change_password_isValid;

    QString m_documentation_uri;
    bool m_documentation_uri_isSet;
    bool m_documentation_uri_isValid;

    Scim_ServiceProviderConfig_etag m_etag;
    bool m_etag_isSet;
    bool m_etag_isValid;

    Scim_ServiceProviderConfig_filter m_filter;
    bool m_filter_isSet;
    bool m_filter_isValid;

    Scim_ServiceProviderConfig_patch m_patch;
    bool m_patch_isSet;
    bool m_patch_isValid;

    Scim_ServiceProviderConfig_sort m_sort;
    bool m_sort_isSet;
    bool m_sort_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Scim_ServiceProviderConfig)

#endif // Scim_ServiceProviderConfig_H
