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
 * Attachment_getDownloadUrl_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/attachment/{pkiAttachmentID}/getDownloadUrl
 */

#ifndef Attachment_getDownloadUrl_v1_Response_mPayload_H
#define Attachment_getDownloadUrl_v1_Response_mPayload_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Attachment_getDownloadUrl_v1_Response_mPayload : public Object {
public:
    Attachment_getDownloadUrl_v1_Response_mPayload();
    Attachment_getDownloadUrl_v1_Response_mPayload(QString json);
    ~Attachment_getDownloadUrl_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSDownloadUrl() const;
    void setSDownloadUrl(const QString &s_download_url);
    bool is_s_download_url_Set() const;
    bool is_s_download_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_download_url;
    bool m_s_download_url_isSet;
    bool m_s_download_url_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Attachment_getDownloadUrl_v1_Response_mPayload)

#endif // Attachment_getDownloadUrl_v1_Response_mPayload_H
