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
 * OAIUsergroup_RequestCompound.h
 *
 * A Usergroup Object and children
 */

#ifndef OAIUsergroup_RequestCompound_H
#define OAIUsergroup_RequestCompound_H

#include <QJsonObject>

#include "OAIMultilingual_UsergroupName.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_UsergroupName;

class OAIUsergroup_RequestCompound : public OAIObject {
public:
    OAIUsergroup_RequestCompound();
    OAIUsergroup_RequestCompound(QString json);
    ~OAIUsergroup_RequestCompound() override;

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

    qint32 pki_usergroup_id;
    bool m_pki_usergroup_id_isSet;
    bool m_pki_usergroup_id_isValid;

    OAIMultilingual_UsergroupName obj_usergroup_name;
    bool m_obj_usergroup_name_isSet;
    bool m_obj_usergroup_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_RequestCompound)

#endif // OAIUsergroup_RequestCompound_H