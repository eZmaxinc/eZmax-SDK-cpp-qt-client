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
 * OAIEzsigntemplate_ListElement.h
 *
 * A Ezsigntemplate List Element
 */

#ifndef OAIEzsigntemplate_ListElement_H
#define OAIEzsigntemplate_ListElement_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzsigntemplate_ListElement : public OAIObject {
public:
    OAIEzsigntemplate_ListElement();
    OAIEzsigntemplate_ListElement(QString json);
    ~OAIEzsigntemplate_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateId() const;
    void setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id);
    bool is_pki_ezsigntemplate_id_Set() const;
    bool is_pki_ezsigntemplate_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSEzsigntemplateDescription() const;
    void setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description);
    bool is_s_ezsigntemplate_description_Set() const;
    bool is_s_ezsigntemplate_description_Valid() const;

    qint32 getIEzsigntemplatedocumentPagetotal() const;
    void setIEzsigntemplatedocumentPagetotal(const qint32 &i_ezsigntemplatedocument_pagetotal);
    bool is_i_ezsigntemplatedocument_pagetotal_Set() const;
    bool is_i_ezsigntemplatedocument_pagetotal_Valid() const;

    qint32 getIEzsigntemplateSignaturetotal() const;
    void setIEzsigntemplateSignaturetotal(const qint32 &i_ezsigntemplate_signaturetotal);
    bool is_i_ezsigntemplate_signaturetotal_Set() const;
    bool is_i_ezsigntemplate_signaturetotal_Valid() const;

    qint32 getIEzsigntemplateFormfieldtotal() const;
    void setIEzsigntemplateFormfieldtotal(const qint32 &i_ezsigntemplate_formfieldtotal);
    bool is_i_ezsigntemplate_formfieldtotal_Set() const;
    bool is_i_ezsigntemplate_formfieldtotal_Valid() const;

    bool isBEzsigntemplateIncomplete() const;
    void setBEzsigntemplateIncomplete(const bool &b_ezsigntemplate_incomplete);
    bool is_b_ezsigntemplate_incomplete_Set() const;
    bool is_b_ezsigntemplate_incomplete_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplate_id;
    bool m_pki_ezsigntemplate_id_isSet;
    bool m_pki_ezsigntemplate_id_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_ezsigntemplate_description;
    bool m_s_ezsigntemplate_description_isSet;
    bool m_s_ezsigntemplate_description_isValid;

    qint32 m_i_ezsigntemplatedocument_pagetotal;
    bool m_i_ezsigntemplatedocument_pagetotal_isSet;
    bool m_i_ezsigntemplatedocument_pagetotal_isValid;

    qint32 m_i_ezsigntemplate_signaturetotal;
    bool m_i_ezsigntemplate_signaturetotal_isSet;
    bool m_i_ezsigntemplate_signaturetotal_isValid;

    qint32 m_i_ezsigntemplate_formfieldtotal;
    bool m_i_ezsigntemplate_formfieldtotal_isSet;
    bool m_i_ezsigntemplate_formfieldtotal_isValid;

    bool m_b_ezsigntemplate_incomplete;
    bool m_b_ezsigntemplate_incomplete_isSet;
    bool m_b_ezsigntemplate_incomplete_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsigntemplate_ListElement)

#endif // OAIEzsigntemplate_ListElement_H
