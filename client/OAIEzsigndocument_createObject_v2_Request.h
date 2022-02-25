/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_createObject_v2_Request.h
 *
 * Request for the /2/object/ezsigndocument/createObject API Request
 */

#ifndef OAIEzsigndocument_createObject_v2_Request_H
#define OAIEzsigndocument_createObject_v2_Request_H

#include <QJsonObject>

#include "OAIEzsigndocument_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_createObject_v2_Request : public OAIObject {
public:
    OAIEzsigndocument_createObject_v2_Request();
    OAIEzsigndocument_createObject_v2_Request(QString json);
    ~OAIEzsigndocument_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigndocument_RequestCompound> getAObjEzsigndocument() const;
    void setAObjEzsigndocument(const QList<OAIEzsigndocument_RequestCompound> &a_obj_ezsigndocument);
    bool is_a_obj_ezsigndocument_Set() const;
    bool is_a_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigndocument_RequestCompound> a_obj_ezsigndocument;
    bool m_a_obj_ezsigndocument_isSet;
    bool m_a_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_createObject_v2_Request)

#endif // OAIEzsigndocument_createObject_v2_Request_H
