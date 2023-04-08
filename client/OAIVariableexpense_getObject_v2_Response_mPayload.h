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
 * OAIVariableexpense_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/variableexpense/{pkiVariableexpenseID}
 */

#ifndef OAIVariableexpense_getObject_v2_Response_mPayload_H
#define OAIVariableexpense_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIVariableexpense_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIVariableexpense_ResponseCompound;

class OAIVariableexpense_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIVariableexpense_getObject_v2_Response_mPayload();
    OAIVariableexpense_getObject_v2_Response_mPayload(QString json);
    ~OAIVariableexpense_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIVariableexpense_ResponseCompound getObjVariableexpense() const;
    void setObjVariableexpense(const OAIVariableexpense_ResponseCompound &obj_variableexpense);
    bool is_obj_variableexpense_Set() const;
    bool is_obj_variableexpense_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIVariableexpense_ResponseCompound obj_variableexpense;
    bool m_obj_variableexpense_isSet;
    bool m_obj_variableexpense_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIVariableexpense_getObject_v2_Response_mPayload)

#endif // OAIVariableexpense_getObject_v2_Response_mPayload_H
