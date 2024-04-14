/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Usergroup_Request.h
 *
 * A Usergroup Object
 */

#ifndef Usergroup_Request_H
#define Usergroup_Request_H

#include <QJsonObject>

#include "Multilingual_UsergroupName.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_UsergroupName;

class Usergroup_Request : public Object {
public:
    Usergroup_Request();
    Usergroup_Request(QString json);
    ~Usergroup_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupId() const;
    void setPkiUsergroupId(const qint32 &pki_usergroup_id);
    bool is_pki_usergroup_id_Set() const;
    bool is_pki_usergroup_id_Valid() const;

    Multilingual_UsergroupName getObjUsergroupName() const;
    void setObjUsergroupName(const Multilingual_UsergroupName &obj_usergroup_name);
    bool is_obj_usergroup_name_Set() const;
    bool is_obj_usergroup_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroup_id;
    bool m_pki_usergroup_id_isSet;
    bool m_pki_usergroup_id_isValid;

    Multilingual_UsergroupName m_obj_usergroup_name;
    bool m_obj_usergroup_name_isSet;
    bool m_obj_usergroup_name_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroup_Request)

#endif // Usergroup_Request_H
