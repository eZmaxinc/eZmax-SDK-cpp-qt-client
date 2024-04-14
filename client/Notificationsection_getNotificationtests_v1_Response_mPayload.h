/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Notificationsection_getNotificationtests_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/notificationsection/{pkiNotificationsectionID}/getNotificationtests
 */

#ifndef Notificationsection_getNotificationtests_v1_Response_mPayload_H
#define Notificationsection_getNotificationtests_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_Notificationsubsectiongetnotificationtests_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Notificationsubsectiongetnotificationtests_Response;

class Notificationsection_getNotificationtests_v1_Response_mPayload : public Object {
public:
    Notificationsection_getNotificationtests_v1_Response_mPayload();
    Notificationsection_getNotificationtests_v1_Response_mPayload(QString json);
    ~Notificationsection_getNotificationtests_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Custom_Notificationsubsectiongetnotificationtests_Response> getAObjNotificationsubsection() const;
    void setAObjNotificationsubsection(const QList<Custom_Notificationsubsectiongetnotificationtests_Response> &a_obj_notificationsubsection);
    bool is_a_obj_notificationsubsection_Set() const;
    bool is_a_obj_notificationsubsection_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Custom_Notificationsubsectiongetnotificationtests_Response> m_a_obj_notificationsubsection;
    bool m_a_obj_notificationsubsection_isSet;
    bool m_a_obj_notificationsubsection_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Notificationsection_getNotificationtests_v1_Response_mPayload)

#endif // Notificationsection_getNotificationtests_v1_Response_mPayload_H
