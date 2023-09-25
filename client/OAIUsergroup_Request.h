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
 * OAIUsergroup_Request.h
 *
 * A Usergroup Object
 */

#ifndef OAIUsergroup_Request_H
#define OAIUsergroup_Request_H

#include <QJsonObject>

#include "OAIMultilingual_UsergroupName.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIMultilingual_UsergroupName;

class OAIUsergroup_Request : public OAIObject {
public:
    OAIUsergroup_Request();
    OAIUsergroup_Request(QString json);
    ~OAIUsergroup_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupId() const;
    void setPkiUsergroupId(const qint32 &pki_usergroup_id);
    bool is_pki_usergroup_id_Set() const;
    bool is_pki_usergroup_id_Valid() const;

    OAIMultilingual_UsergroupName getObjUsergroupName() const;
    void setObjUsergroupName(const OAIMultilingual_UsergroupName &obj_usergroup_name);
    bool is_obj_usergroup_name_Set() const;
    bool is_obj_usergroup_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroup_id;
    bool m_pki_usergroup_id_isSet;
    bool m_pki_usergroup_id_isValid;

    OAIMultilingual_UsergroupName m_obj_usergroup_name;
    bool m_obj_usergroup_name_isSet;
    bool m_obj_usergroup_name_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIUsergroup_Request)

#endif // OAIUsergroup_Request_H
