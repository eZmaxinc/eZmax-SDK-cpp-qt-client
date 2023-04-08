/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_getCommunicationList_v1_Response_mPayload.h
 *
 * Response for GET /1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationList
 */

#ifndef OAIEzsignfolder_getCommunicationList_v1_Response_mPayload_H
#define OAIEzsignfolder_getCommunicationList_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_CommunicationListElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_CommunicationListElement_Response;

class OAIEzsignfolder_getCommunicationList_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_getCommunicationList_v1_Response_mPayload();
    OAIEzsignfolder_getCommunicationList_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_getCommunicationList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_CommunicationListElement_Response> getAObjCommunication() const;
    void setAObjCommunication(const QList<OAICustom_CommunicationListElement_Response> &a_obj_communication);
    bool is_a_obj_communication_Set() const;
    bool is_a_obj_communication_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICustom_CommunicationListElement_Response> a_obj_communication;
    bool m_a_obj_communication_isSet;
    bool m_a_obj_communication_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getCommunicationList_v1_Response_mPayload)

#endif // OAIEzsignfolder_getCommunicationList_v1_Response_mPayload_H
