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
 * OAIEzsignfolder_createObject_v2_Request.h
 *
 * Request for POST /2/object/ezsignfolder
 */

#ifndef OAIEzsignfolder_createObject_v2_Request_H
#define OAIEzsignfolder_createObject_v2_Request_H

#include <QJsonObject>

#include "OAIEzsignfolder_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfolder_RequestCompound;

class OAIEzsignfolder_createObject_v2_Request : public OAIObject {
public:
    OAIEzsignfolder_createObject_v2_Request();
    OAIEzsignfolder_createObject_v2_Request(QString json);
    ~OAIEzsignfolder_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfolder_RequestCompound> getAObjEzsignfolder() const;
    void setAObjEzsignfolder(const QList<OAIEzsignfolder_RequestCompound> &a_obj_ezsignfolder);
    bool is_a_obj_ezsignfolder_Set() const;
    bool is_a_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfolder_RequestCompound> a_obj_ezsignfolder;
    bool m_a_obj_ezsignfolder_isSet;
    bool m_a_obj_ezsignfolder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_createObject_v2_Request)

#endif // OAIEzsignfolder_createObject_v2_Request_H
