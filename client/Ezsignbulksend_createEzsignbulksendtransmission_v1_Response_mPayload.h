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
 * Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsignbulksend/{pkiEzsignbulksendID}/createEzsignbulksendtransmission
 */

#ifndef Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload_H
#define Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignbulksendtransmission_Response.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignbulksendtransmission_Response;

class Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload : public Object {
public:
    Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload();
    Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload(QString json);
    ~Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignbulksendtransmission_Response getObjEzsignbulksendtransmission() const;
    void setObjEzsignbulksendtransmission(const Ezsignbulksendtransmission_Response &obj_ezsignbulksendtransmission);
    bool is_obj_ezsignbulksendtransmission_Set() const;
    bool is_obj_ezsignbulksendtransmission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignbulksendtransmission_Response m_obj_ezsignbulksendtransmission;
    bool m_obj_ezsignbulksendtransmission_isSet;
    bool m_obj_ezsignbulksendtransmission_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload)

#endif // Ezsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload_H
