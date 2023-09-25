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
 * OAISignature_createObject_v1_Request.h
 *
 * Request for POST /1/object/signature
 */

#ifndef OAISignature_createObject_v1_Request_H
#define OAISignature_createObject_v1_Request_H

#include <QJsonObject>

#include "OAISignature_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAISignature_RequestCompound;

class OAISignature_createObject_v1_Request : public OAIObject {
public:
    OAISignature_createObject_v1_Request();
    OAISignature_createObject_v1_Request(QString json);
    ~OAISignature_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAISignature_RequestCompound> getAObjSignature() const;
    void setAObjSignature(const QList<OAISignature_RequestCompound> &a_obj_signature);
    bool is_a_obj_signature_Set() const;
    bool is_a_obj_signature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAISignature_RequestCompound> m_a_obj_signature;
    bool m_a_obj_signature_isSet;
    bool m_a_obj_signature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAISignature_createObject_v1_Request)

#endif // OAISignature_createObject_v1_Request_H
