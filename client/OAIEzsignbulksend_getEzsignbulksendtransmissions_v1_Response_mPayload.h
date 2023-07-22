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
 * OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignbulksend/{pkiEzsignbulksend}/getEzsignbulksendtransmissions
 */

#ifndef OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload_H
#define OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignbulksendtransmission_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksendtransmission_ResponseCompound;

class OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload();
    OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload(QString json);
    ~OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignbulksendtransmission_ResponseCompound> getAObjEzsignbulksendtransmission() const;
    void setAObjEzsignbulksendtransmission(const QList<OAIEzsignbulksendtransmission_ResponseCompound> &a_obj_ezsignbulksendtransmission);
    bool is_a_obj_ezsignbulksendtransmission_Set() const;
    bool is_a_obj_ezsignbulksendtransmission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignbulksendtransmission_ResponseCompound> a_obj_ezsignbulksendtransmission;
    bool m_a_obj_ezsignbulksendtransmission_isSet;
    bool m_a_obj_ezsignbulksendtransmission_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload)

#endif // OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload_H
