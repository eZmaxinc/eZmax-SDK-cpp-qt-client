/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUNUSED_ezsigndocument_editObject_v1_Request.h
 *
 * Request for the /1/object/ezsigndocument/editObject API Request
 */

#ifndef OAIUNUSED_ezsigndocument_editObject_v1_Request_H
#define OAIUNUSED_ezsigndocument_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigndocument_Request.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUNUSED_ezsigndocument_editObject_v1_Request : public OAIObject {
public:
    OAIUNUSED_ezsigndocument_editObject_v1_Request();
    OAIUNUSED_ezsigndocument_editObject_v1_Request(QString json);
    ~OAIUNUSED_ezsigndocument_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_Request getObjEzsigndocument() const;
    void setObjEzsigndocument(const OAIEzsigndocument_Request &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigndocument_Request obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUNUSED_ezsigndocument_editObject_v1_Request)

#endif // OAIUNUSED_ezsigndocument_editObject_v1_Request_H
