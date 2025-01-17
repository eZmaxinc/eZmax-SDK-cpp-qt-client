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
 * Ezsigndiscussion_ResponseCompound.h
 *
 * A Ezsigndiscussion Object
 */

#ifndef Ezsigndiscussion_ResponseCompound_H
#define Ezsigndiscussion_ResponseCompound_H

#include <QJsonObject>

#include "Discussion_ResponseCompound.h"
#include "Ezsigndiscussion_Response.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Discussion_ResponseCompound;

class Ezsigndiscussion_ResponseCompound : public Object {
public:
    Ezsigndiscussion_ResponseCompound();
    Ezsigndiscussion_ResponseCompound(QString json);
    ~Ezsigndiscussion_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigndiscussionId() const;
    void setPkiEzsigndiscussionId(const qint32 &pki_ezsigndiscussion_id);
    bool is_pki_ezsigndiscussion_id_Set() const;
    bool is_pki_ezsigndiscussion_id_Valid() const;

    qint32 getFkiEzsignpageId() const;
    void setFkiEzsignpageId(const qint32 &fki_ezsignpage_id);
    bool is_fki_ezsignpage_id_Set() const;
    bool is_fki_ezsignpage_id_Valid() const;

    qint32 getFkiDiscussionId() const;
    void setFkiDiscussionId(const qint32 &fki_discussion_id);
    bool is_fki_discussion_id_Set() const;
    bool is_fki_discussion_id_Valid() const;

    qint32 getIEzsigndiscussionX() const;
    void setIEzsigndiscussionX(const qint32 &i_ezsigndiscussion_x);
    bool is_i_ezsigndiscussion_x_Set() const;
    bool is_i_ezsigndiscussion_x_Valid() const;

    qint32 getIEzsigndiscussionY() const;
    void setIEzsigndiscussionY(const qint32 &i_ezsigndiscussion_y);
    bool is_i_ezsigndiscussion_y_Set() const;
    bool is_i_ezsigndiscussion_y_Valid() const;

    qint32 getIEzsigndiscussionPagenumber() const;
    void setIEzsigndiscussionPagenumber(const qint32 &i_ezsigndiscussion_pagenumber);
    bool is_i_ezsigndiscussion_pagenumber_Set() const;
    bool is_i_ezsigndiscussion_pagenumber_Valid() const;

    Discussion_ResponseCompound getObjDiscussion() const;
    void setObjDiscussion(const Discussion_ResponseCompound &obj_discussion);
    bool is_obj_discussion_Set() const;
    bool is_obj_discussion_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigndiscussion_id;
    bool m_pki_ezsigndiscussion_id_isSet;
    bool m_pki_ezsigndiscussion_id_isValid;

    qint32 m_fki_ezsignpage_id;
    bool m_fki_ezsignpage_id_isSet;
    bool m_fki_ezsignpage_id_isValid;

    qint32 m_fki_discussion_id;
    bool m_fki_discussion_id_isSet;
    bool m_fki_discussion_id_isValid;

    qint32 m_i_ezsigndiscussion_x;
    bool m_i_ezsigndiscussion_x_isSet;
    bool m_i_ezsigndiscussion_x_isValid;

    qint32 m_i_ezsigndiscussion_y;
    bool m_i_ezsigndiscussion_y_isSet;
    bool m_i_ezsigndiscussion_y_isValid;

    qint32 m_i_ezsigndiscussion_pagenumber;
    bool m_i_ezsigndiscussion_pagenumber_isSet;
    bool m_i_ezsigndiscussion_pagenumber_isValid;

    Discussion_ResponseCompound m_obj_discussion;
    bool m_obj_discussion_isSet;
    bool m_obj_discussion_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndiscussion_ResponseCompound)

#endif // Ezsigndiscussion_ResponseCompound_H
