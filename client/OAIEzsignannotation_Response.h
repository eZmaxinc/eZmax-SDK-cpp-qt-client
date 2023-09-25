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
 * OAIEzsignannotation_Response.h
 *
 * A Ezsignannotation Object
 */

#ifndef OAIEzsignannotation_Response_H
#define OAIEzsignannotation_Response_H

#include <QJsonObject>

#include "OAIEnum_Horizontalalignment.h"
#include "OAIEnum_Verticalalignment.h"
#include "OAIField_eEzsignannotationType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzsignannotation_Response : public OAIObject {
public:
    OAIEzsignannotation_Response();
    OAIEzsignannotation_Response(QString json);
    ~OAIEzsignannotation_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignannotationId() const;
    void setPkiEzsignannotationId(const qint32 &pki_ezsignannotation_id);
    bool is_pki_ezsignannotation_id_Set() const;
    bool is_pki_ezsignannotation_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    OAIEnum_Horizontalalignment getEEzsignannotationHorizontalalignment() const;
    void setEEzsignannotationHorizontalalignment(const OAIEnum_Horizontalalignment &e_ezsignannotation_horizontalalignment);
    bool is_e_ezsignannotation_horizontalalignment_Set() const;
    bool is_e_ezsignannotation_horizontalalignment_Valid() const;

    OAIEnum_Verticalalignment getEEzsignannotationVerticalalignment() const;
    void setEEzsignannotationVerticalalignment(const OAIEnum_Verticalalignment &e_ezsignannotation_verticalalignment);
    bool is_e_ezsignannotation_verticalalignment_Set() const;
    bool is_e_ezsignannotation_verticalalignment_Valid() const;

    OAIField_eEzsignannotationType getEEzsignannotationType() const;
    void setEEzsignannotationType(const OAIField_eEzsignannotationType &e_ezsignannotation_type);
    bool is_e_ezsignannotation_type_Set() const;
    bool is_e_ezsignannotation_type_Valid() const;

    qint32 getIEzsignannotationX() const;
    void setIEzsignannotationX(const qint32 &i_ezsignannotation_x);
    bool is_i_ezsignannotation_x_Set() const;
    bool is_i_ezsignannotation_x_Valid() const;

    qint32 getIEzsignannotationY() const;
    void setIEzsignannotationY(const qint32 &i_ezsignannotation_y);
    bool is_i_ezsignannotation_y_Set() const;
    bool is_i_ezsignannotation_y_Valid() const;

    qint32 getIEzsignannotationWidth() const;
    void setIEzsignannotationWidth(const qint32 &i_ezsignannotation_width);
    bool is_i_ezsignannotation_width_Set() const;
    bool is_i_ezsignannotation_width_Valid() const;

    qint32 getIEzsignannotationHeight() const;
    void setIEzsignannotationHeight(const qint32 &i_ezsignannotation_height);
    bool is_i_ezsignannotation_height_Set() const;
    bool is_i_ezsignannotation_height_Valid() const;

    QString getSEzsignannotationText() const;
    void setSEzsignannotationText(const QString &s_ezsignannotation_text);
    bool is_s_ezsignannotation_text_Set() const;
    bool is_s_ezsignannotation_text_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignannotation_id;
    bool m_pki_ezsignannotation_id_isSet;
    bool m_pki_ezsignannotation_id_isValid;

    qint32 m_fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    OAIEnum_Horizontalalignment m_e_ezsignannotation_horizontalalignment;
    bool m_e_ezsignannotation_horizontalalignment_isSet;
    bool m_e_ezsignannotation_horizontalalignment_isValid;

    OAIEnum_Verticalalignment m_e_ezsignannotation_verticalalignment;
    bool m_e_ezsignannotation_verticalalignment_isSet;
    bool m_e_ezsignannotation_verticalalignment_isValid;

    OAIField_eEzsignannotationType m_e_ezsignannotation_type;
    bool m_e_ezsignannotation_type_isSet;
    bool m_e_ezsignannotation_type_isValid;

    qint32 m_i_ezsignannotation_x;
    bool m_i_ezsignannotation_x_isSet;
    bool m_i_ezsignannotation_x_isValid;

    qint32 m_i_ezsignannotation_y;
    bool m_i_ezsignannotation_y_isSet;
    bool m_i_ezsignannotation_y_isValid;

    qint32 m_i_ezsignannotation_width;
    bool m_i_ezsignannotation_width_isSet;
    bool m_i_ezsignannotation_width_isValid;

    qint32 m_i_ezsignannotation_height;
    bool m_i_ezsignannotation_height_isSet;
    bool m_i_ezsignannotation_height_isValid;

    QString m_s_ezsignannotation_text;
    bool m_s_ezsignannotation_text_isSet;
    bool m_s_ezsignannotation_text_isValid;

    qint32 m_i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsignannotation_Response)

#endif // OAIEzsignannotation_Response_H
