/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplatepackage_ListElement.h
 *
 * An Ezsigntemplatepackage List Element
 */

#ifndef Ezsigntemplatepackage_ListElement_H
#define Ezsigntemplatepackage_ListElement_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatepackage_ListElement : public Object {
public:
    Ezsigntemplatepackage_ListElement();
    Ezsigntemplatepackage_ListElement(QString json);
    ~Ezsigntemplatepackage_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackageId() const;
    void setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id);
    bool is_pki_ezsigntemplatepackage_id_Set() const;
    bool is_pki_ezsigntemplatepackage_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSEzsigntemplatepackageDescription() const;
    void setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description);
    bool is_s_ezsigntemplatepackage_description_Set() const;
    bool is_s_ezsigntemplatepackage_description_Valid() const;

    bool isBEzsigntemplatepackageNeedvalidation() const;
    void setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation);
    bool is_b_ezsigntemplatepackage_needvalidation_Set() const;
    bool is_b_ezsigntemplatepackage_needvalidation_Valid() const;

    qint32 getIEzsigntemplatepackagemembership() const;
    void setIEzsigntemplatepackagemembership(const qint32 &i_ezsigntemplatepackagemembership);
    bool is_i_ezsigntemplatepackagemembership_Set() const;
    bool is_i_ezsigntemplatepackagemembership_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    bool isBEzsigntemplatepackageIsactive() const;
    void setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive);
    bool is_b_ezsigntemplatepackage_isactive_Set() const;
    bool is_b_ezsigntemplatepackage_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatepackage_id;
    bool m_pki_ezsigntemplatepackage_id_isSet;
    bool m_pki_ezsigntemplatepackage_id_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_ezsigntemplatepackage_description;
    bool m_s_ezsigntemplatepackage_description_isSet;
    bool m_s_ezsigntemplatepackage_description_isValid;

    bool m_b_ezsigntemplatepackage_needvalidation;
    bool m_b_ezsigntemplatepackage_needvalidation_isSet;
    bool m_b_ezsigntemplatepackage_needvalidation_isValid;

    qint32 m_i_ezsigntemplatepackagemembership;
    bool m_i_ezsigntemplatepackagemembership_isSet;
    bool m_i_ezsigntemplatepackagemembership_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    bool m_b_ezsigntemplatepackage_isactive;
    bool m_b_ezsigntemplatepackage_isactive_isSet;
    bool m_b_ezsigntemplatepackage_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackage_ListElement)

#endif // Ezsigntemplatepackage_ListElement_H
