/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISignature_Response.h
 *
 * A Signature Object
 */

#ifndef OAISignature_Response_H
#define OAISignature_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISignature_Response : public OAIObject {
public:
    OAISignature_Response();
    OAISignature_Response(QString json);
    ~OAISignature_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiSignatureId() const;
    void setPkiSignatureId(const qint32 &pki_signature_id);
    bool is_pki_signature_id_Set() const;
    bool is_pki_signature_id_Valid() const;

    QString getSSignatureUrl() const;
    void setSSignatureUrl(const QString &s_signature_url);
    bool is_s_signature_url_Set() const;
    bool is_s_signature_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_signature_id;
    bool m_pki_signature_id_isSet;
    bool m_pki_signature_id_isValid;

    QString s_signature_url;
    bool m_s_signature_url_isSet;
    bool m_s_signature_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISignature_Response)

#endif // OAISignature_Response_H
