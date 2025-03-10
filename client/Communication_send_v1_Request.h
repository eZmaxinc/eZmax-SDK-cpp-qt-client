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
 * Communication_send_v1_Request.h
 *
 * Request for POST /1/object/communication
 */

#ifndef Communication_send_v1_Request_H
#define Communication_send_v1_Request_H

#include <QJsonObject>

#include "Communication_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Communication_RequestCompound;

class Communication_send_v1_Request : public Object {
public:
    Communication_send_v1_Request();
    Communication_send_v1_Request(QString json);
    ~Communication_send_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Communication_RequestCompound> getAObjCommunication() const;
    void setAObjCommunication(const QList<Communication_RequestCompound> &a_obj_communication);
    bool is_a_obj_communication_Set() const;
    bool is_a_obj_communication_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Communication_RequestCompound> m_a_obj_communication;
    bool m_a_obj_communication_isSet;
    bool m_a_obj_communication_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Communication_send_v1_Request)

#endif // Communication_send_v1_Request_H
