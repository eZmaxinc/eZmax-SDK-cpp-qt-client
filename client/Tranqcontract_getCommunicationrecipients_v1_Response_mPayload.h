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
 * Tranqcontract_getCommunicationrecipients_v1_Response_mPayload.h
 *
 * Response for GET /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationrecipients
 */

#ifndef Tranqcontract_getCommunicationrecipients_v1_Response_mPayload_H
#define Tranqcontract_getCommunicationrecipients_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_Communicationrecipientsgroup_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Communicationrecipientsgroup_Response;

class Tranqcontract_getCommunicationrecipients_v1_Response_mPayload : public Object {
public:
    Tranqcontract_getCommunicationrecipients_v1_Response_mPayload();
    Tranqcontract_getCommunicationrecipients_v1_Response_mPayload(QString json);
    ~Tranqcontract_getCommunicationrecipients_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Custom_Communicationrecipientsgroup_Response> getAObjCommunicationrecipientsgroup() const;
    void setAObjCommunicationrecipientsgroup(const QList<Custom_Communicationrecipientsgroup_Response> &a_obj_communicationrecipientsgroup);
    bool is_a_obj_communicationrecipientsgroup_Set() const;
    bool is_a_obj_communicationrecipientsgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Custom_Communicationrecipientsgroup_Response> m_a_obj_communicationrecipientsgroup;
    bool m_a_obj_communicationrecipientsgroup_isSet;
    bool m_a_obj_communicationrecipientsgroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Tranqcontract_getCommunicationrecipients_v1_Response_mPayload)

#endif // Tranqcontract_getCommunicationrecipients_v1_Response_mPayload_H
