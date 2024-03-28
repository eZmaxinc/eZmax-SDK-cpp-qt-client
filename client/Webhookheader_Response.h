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
 * Webhookheader_Response.h
 *
 * A webhookheader object
 */

#ifndef Webhookheader_Response_H
#define Webhookheader_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Webhookheader_Response : public Object {
public:
    Webhookheader_Response();
    Webhookheader_Response(QString json);
    ~Webhookheader_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiWebhookheaderId() const;
    void setPkiWebhookheaderId(const qint32 &pki_webhookheader_id);
    bool is_pki_webhookheader_id_Set() const;
    bool is_pki_webhookheader_id_Valid() const;

    qint32 getFkiWebhookId() const;
    void setFkiWebhookId(const qint32 &fki_webhook_id);
    bool is_fki_webhook_id_Set() const;
    bool is_fki_webhook_id_Valid() const;

    QString getSWebhookheaderName() const;
    void setSWebhookheaderName(const QString &s_webhookheader_name);
    bool is_s_webhookheader_name_Set() const;
    bool is_s_webhookheader_name_Valid() const;

    QString getSWebhookheaderValue() const;
    void setSWebhookheaderValue(const QString &s_webhookheader_value);
    bool is_s_webhookheader_value_Set() const;
    bool is_s_webhookheader_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_webhookheader_id;
    bool m_pki_webhookheader_id_isSet;
    bool m_pki_webhookheader_id_isValid;

    qint32 m_fki_webhook_id;
    bool m_fki_webhook_id_isSet;
    bool m_fki_webhook_id_isValid;

    QString m_s_webhookheader_name;
    bool m_s_webhookheader_name_isSet;
    bool m_s_webhookheader_name_isValid;

    QString m_s_webhookheader_value;
    bool m_s_webhookheader_value_isSet;
    bool m_s_webhookheader_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhookheader_Response)

#endif // Webhookheader_Response_H
