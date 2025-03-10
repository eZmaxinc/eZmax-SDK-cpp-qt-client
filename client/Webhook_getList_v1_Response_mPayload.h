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
 * Webhook_getList_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/webhook/getList
 */

#ifndef Webhook_getList_v1_Response_mPayload_H
#define Webhook_getList_v1_Response_mPayload_H

#include <QJsonObject>

#include "Webhook_ListElement.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Webhook_ListElement;

class Webhook_getList_v1_Response_mPayload : public Object {
public:
    Webhook_getList_v1_Response_mPayload();
    Webhook_getList_v1_Response_mPayload(QString json);
    ~Webhook_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIRowReturned() const;
    void setIRowReturned(const qint32 &i_row_returned);
    bool is_i_row_returned_Set() const;
    bool is_i_row_returned_Valid() const;

    qint32 getIRowFiltered() const;
    void setIRowFiltered(const qint32 &i_row_filtered);
    bool is_i_row_filtered_Set() const;
    bool is_i_row_filtered_Valid() const;

    QList<Webhook_ListElement> getAObjWebhook() const;
    void setAObjWebhook(const QList<Webhook_ListElement> &a_obj_webhook);
    bool is_a_obj_webhook_Set() const;
    bool is_a_obj_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 m_i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;

    QList<Webhook_ListElement> m_a_obj_webhook;
    bool m_a_obj_webhook_isSet;
    bool m_a_obj_webhook_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_getList_v1_Response_mPayload)

#endif // Webhook_getList_v1_Response_mPayload_H
