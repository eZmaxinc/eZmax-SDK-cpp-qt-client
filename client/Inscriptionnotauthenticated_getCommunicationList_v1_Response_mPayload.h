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
 * Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload.h
 *
 * Response for GET /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationList
 */

#ifndef Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload_H
#define Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_CommunicationListElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_CommunicationListElement_Response;

class Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload : public Object {
public:
    Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload();
    Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload(QString json);
    ~Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Custom_CommunicationListElement_Response> getAObjCommunication() const;
    void setAObjCommunication(const QList<Custom_CommunicationListElement_Response> &a_obj_communication);
    bool is_a_obj_communication_Set() const;
    bool is_a_obj_communication_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Custom_CommunicationListElement_Response> m_a_obj_communication;
    bool m_a_obj_communication_isSet;
    bool m_a_obj_communication_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload)

#endif // Inscriptionnotauthenticated_getCommunicationList_v1_Response_mPayload_H
