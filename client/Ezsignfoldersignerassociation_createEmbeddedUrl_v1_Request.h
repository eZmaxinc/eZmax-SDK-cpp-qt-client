/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request.h
 *
 * Request for POST /1/object/ezsignfoldersignerassociation/createEmbeddedUrl
 */

#ifndef Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request_H
#define Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request : public Object {
public:
    Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request();
    Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request(QString json);
    ~Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSReturnUrl() const;
    void setSReturnUrl(const QString &s_return_url);
    bool is_s_return_url_Set() const;
    bool is_s_return_url_Valid() const;

    QString getSIframedomain() const;
    void setSIframedomain(const QString &s_iframedomain);
    bool is_s_iframedomain_Set() const;
    bool is_s_iframedomain_Valid() const;

    bool isBIsIframe() const;
    void setBIsIframe(const bool &b_is_iframe);
    bool is_b_is_iframe_Set() const;
    bool is_b_is_iframe_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_return_url;
    bool m_s_return_url_isSet;
    bool m_s_return_url_isValid;

    QString m_s_iframedomain;
    bool m_s_iframedomain_isSet;
    bool m_s_iframedomain_isValid;

    bool m_b_is_iframe;
    bool m_b_is_iframe_isSet;
    bool m_b_is_iframe_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request)

#endif // Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request_H
