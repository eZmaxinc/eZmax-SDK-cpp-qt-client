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
 * OAISignature_editObject_v1_Request.h
 *
 * Request for PUT /1/object/signature/{pkiSignatureID}
 */

#ifndef OAISignature_editObject_v1_Request_H
#define OAISignature_editObject_v1_Request_H

#include <QJsonObject>

#include "OAISignature_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISignature_RequestCompound;

class OAISignature_editObject_v1_Request : public OAIObject {
public:
    OAISignature_editObject_v1_Request();
    OAISignature_editObject_v1_Request(QString json);
    ~OAISignature_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISignature_RequestCompound getObjSignature() const;
    void setObjSignature(const OAISignature_RequestCompound &obj_signature);
    bool is_obj_signature_Set() const;
    bool is_obj_signature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISignature_RequestCompound obj_signature;
    bool m_obj_signature_isSet;
    bool m_obj_signature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISignature_editObject_v1_Request)

#endif // OAISignature_editObject_v1_Request_H
