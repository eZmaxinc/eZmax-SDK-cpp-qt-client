/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.48
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_createObject_v1_Request.h
 *
 * Request for the /1/object/ezsigndocument/createObject API Request
 */

#ifndef OAIEzsigndocument_createObject_v1_Request_H
#define OAIEzsigndocument_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigndocument_Request.h"
#include "OAIEzsigndocument_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_createObject_v1_Request();
    OAIEzsigndocument_createObject_v1_Request(QString json);
    ~OAIEzsigndocument_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_Request getObjEzsigndocument() const;
    void setObjEzsigndocument(const OAIEzsigndocument_Request &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    OAIEzsigndocument_RequestCompound getObjEzsigndocumentCompound() const;
    void setObjEzsigndocumentCompound(const OAIEzsigndocument_RequestCompound &obj_ezsigndocument_compound);
    bool is_obj_ezsigndocument_compound_Set() const;
    bool is_obj_ezsigndocument_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigndocument_Request obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;

    OAIEzsigndocument_RequestCompound obj_ezsigndocument_compound;
    bool m_obj_ezsigndocument_compound_isSet;
    bool m_obj_ezsigndocument_compound_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_createObject_v1_Request)

#endif // OAIEzsigndocument_createObject_v1_Request_H
