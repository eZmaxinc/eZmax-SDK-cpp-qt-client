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
 * OAIEzsigntemplate_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplate
 */

#ifndef OAIEzsigntemplate_createObject_v1_Request_H
#define OAIEzsigntemplate_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplate_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_RequestCompound;

class OAIEzsigntemplate_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplate_createObject_v1_Request();
    OAIEzsigntemplate_createObject_v1_Request(QString json);
    ~OAIEzsigntemplate_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplate_RequestCompound> getAObjEzsigntemplate() const;
    void setAObjEzsigntemplate(const QList<OAIEzsigntemplate_RequestCompound> &a_obj_ezsigntemplate);
    bool is_a_obj_ezsigntemplate_Set() const;
    bool is_a_obj_ezsigntemplate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplate_RequestCompound> a_obj_ezsigntemplate;
    bool m_a_obj_ezsigntemplate_isSet;
    bool m_a_obj_ezsigntemplate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplate_createObject_v1_Request)

#endif // OAIEzsigntemplate_createObject_v1_Request_H
