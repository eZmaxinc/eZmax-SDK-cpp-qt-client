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
 * OAIEzsignfoldertype_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsignfoldertype
 */

#ifndef OAIEzsignfoldertype_createObject_v1_Request_H
#define OAIEzsignfoldertype_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfoldertype_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldertype_RequestCompound;

class OAIEzsignfoldertype_createObject_v1_Request : public OAIObject {
public:
    OAIEzsignfoldertype_createObject_v1_Request();
    OAIEzsignfoldertype_createObject_v1_Request(QString json);
    ~OAIEzsignfoldertype_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldertype_RequestCompound> getAObjEzsignfoldertype() const;
    void setAObjEzsignfoldertype(const QList<OAIEzsignfoldertype_RequestCompound> &a_obj_ezsignfoldertype);
    bool is_a_obj_ezsignfoldertype_Set() const;
    bool is_a_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfoldertype_RequestCompound> a_obj_ezsignfoldertype;
    bool m_a_obj_ezsignfoldertype_isSet;
    bool m_a_obj_ezsignfoldertype_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_createObject_v1_Request)

#endif // OAIEzsignfoldertype_createObject_v1_Request_H
