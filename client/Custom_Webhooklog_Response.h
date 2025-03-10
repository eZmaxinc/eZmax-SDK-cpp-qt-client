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
 * Custom_Webhooklog_Response.h
 *
 * A custom Webhooklog object
 */

#ifndef Custom_Webhooklog_Response_H
#define Custom_Webhooklog_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_Webhooklog_Response : public Object {
public:
    Custom_Webhooklog_Response();
    Custom_Webhooklog_Response(QString json);
    ~Custom_Webhooklog_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDtWebhooklogDate() const;
    void setDtWebhooklogDate(const QString &dt_webhooklog_date);
    bool is_dt_webhooklog_date_Set() const;
    bool is_dt_webhooklog_date_Valid() const;

    QString getTWebhooklogJson() const;
    void setTWebhooklogJson(const QString &t_webhooklog_json);
    bool is_t_webhooklog_json_Set() const;
    bool is_t_webhooklog_json_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_dt_webhooklog_date;
    bool m_dt_webhooklog_date_isSet;
    bool m_dt_webhooklog_date_isValid;

    QString m_t_webhooklog_json;
    bool m_t_webhooklog_json_isSet;
    bool m_t_webhooklog_json_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Webhooklog_Response)

#endif // Custom_Webhooklog_Response_H
