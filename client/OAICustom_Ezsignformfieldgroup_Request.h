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
 * OAICustom_Ezsignformfieldgroup_Request.h
 *
 * A Custom Ezsignformfieldgroup Object to fill an Ezsignform using submitForm
 */

#ifndef OAICustom_Ezsignformfieldgroup_Request_H
#define OAICustom_Ezsignformfieldgroup_Request_H

#include <QJsonObject>

#include "OAICustom_Ezsignformfield_Request.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAICustom_Ezsignformfield_Request;

class OAICustom_Ezsignformfieldgroup_Request : public OAIObject {
public:
    OAICustom_Ezsignformfieldgroup_Request();
    OAICustom_Ezsignformfieldgroup_Request(QString json);
    ~OAICustom_Ezsignformfieldgroup_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignformfieldgroupId() const;
    void setPkiEzsignformfieldgroupId(const qint32 &pki_ezsignformfieldgroup_id);
    bool is_pki_ezsignformfieldgroup_id_Set() const;
    bool is_pki_ezsignformfieldgroup_id_Valid() const;

    QString getSEzsignformfieldgroupLabel() const;
    void setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label);
    bool is_s_ezsignformfieldgroup_label_Set() const;
    bool is_s_ezsignformfieldgroup_label_Valid() const;

    QList<OAICustom_Ezsignformfield_Request> getAObjEzsignformfield() const;
    void setAObjEzsignformfield(const QList<OAICustom_Ezsignformfield_Request> &a_obj_ezsignformfield);
    bool is_a_obj_ezsignformfield_Set() const;
    bool is_a_obj_ezsignformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignformfieldgroup_id;
    bool m_pki_ezsignformfieldgroup_id_isSet;
    bool m_pki_ezsignformfieldgroup_id_isValid;

    QString m_s_ezsignformfieldgroup_label;
    bool m_s_ezsignformfieldgroup_label_isSet;
    bool m_s_ezsignformfieldgroup_label_isValid;

    QList<OAICustom_Ezsignformfield_Request> m_a_obj_ezsignformfield;
    bool m_a_obj_ezsignformfield_isSet;
    bool m_a_obj_ezsignformfield_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAICustom_Ezsignformfieldgroup_Request)

#endif // OAICustom_Ezsignformfieldgroup_Request_H
