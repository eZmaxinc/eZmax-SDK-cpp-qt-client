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
 * OAIApikey_editObject_v1_Request.h
 *
 * Request for PUT /1/object/apikey/{pkiApikeyID}
 */

#ifndef OAIApikey_editObject_v1_Request_H
#define OAIApikey_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIApikey_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIApikey_RequestCompound;

class OAIApikey_editObject_v1_Request : public OAIObject {
public:
    OAIApikey_editObject_v1_Request();
    OAIApikey_editObject_v1_Request(QString json);
    ~OAIApikey_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIApikey_RequestCompound getObjApikey() const;
    void setObjApikey(const OAIApikey_RequestCompound &obj_apikey);
    bool is_obj_apikey_Set() const;
    bool is_obj_apikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIApikey_RequestCompound obj_apikey;
    bool m_obj_apikey_isSet;
    bool m_obj_apikey_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_editObject_v1_Request)

#endif // OAIApikey_editObject_v1_Request_H
